package dev.codeswithrobi.security.Controller;

import dev.codeswithrobi.security.LoginRequest;
import dev.codeswithrobi.security.Security.JwtUtil;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/auth")
public class AuthController {

    @PostMapping("/login")
    public String login(@RequestBody LoginRequest req) {

        if ("admin".equals(req.getUsername())
                && "1234".equals(req.getPassword())) {

            return JwtUtil.generateToken(req.getUsername());
        }

        return "Invalid Credentials";
    }

    @GetMapping("/hello")
    public String hello() {
        return "Hello JWT Secure API";
    }
}