#lang racket
(define gen-lazy-list
  (lambda (start stop)
    (if (> start stop)
        #f
        (cons start
            (lambda () (gen-lazy-list (+ start 1) stop))))))


;; non-curried version
(define mult
  (lambda (a b)
    (* a b)))

(define multc
  (lambda (a)
    (lambda (b)
      (* a b))))

;; takes a 3 parameter function and returns
;; a curried version
(define curry3
  (lambda (f)
    (lambda (a)
      (lambda (y)
        (lambda (z)
          (f a b c))))))
  



