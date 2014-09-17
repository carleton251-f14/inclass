#lang racket
(define list-length
  (lambda (lst)
    (if (null? lst)
        0   ;; if condition is true
        (+ 1 (list-length (cdr lst))))))