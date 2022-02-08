#lang racket
(require (lib "turtles.ss" "graphics"))
(turtles #t)

(define VK (lambda (t n)
            (turtles #t)
            (if (= n 1)
                (move t)
                (draw (VK (/ t 3) (- n 1))
                      (turn 60)
                      (VK (/ t 3) (- n 1))
                      (turn 240)
                      (VK (/ t 3) (- n 1))
                      (turn 60)
                      (VK (/ t 3) (- n 1))
))))