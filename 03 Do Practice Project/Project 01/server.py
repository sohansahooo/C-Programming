import http.server
import subprocess
from urllib.parse import urlparse, parse_qs
from http.server import BaseHTTPRequestHandler


class GuessingGameHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        if self.path.startswith("/guess"):
            query_components = parse_qs(urlparse(self.path).query)
            guess = query_components.get("number", [None])[0]

            if guess is None:
                self.send_error(400, "Bad Request: number parameter is missing")
                return

            result = subprocess.run(
                ["./number_guessing_game", guess], capture_output=True, text=True
            )

            self.send_response(200)
            self.send_header("Content-type", "text/plain")
            self.send_header("Access-Control-Allow-Origin", "*")  # Fix CORS
            self.end_headers()
            self.wfile.write(result.stdout.encode())
        else:
            self.send_error(404, "File Not Found")


if __name__ == "__main__":
    server_address = ("", 3000)
    httpd = http.server.HTTPServer(server_address, GuessingGameHandler)
    print("Starting server on port 3000...")
    httpd.serve_forever()
