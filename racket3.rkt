#lang racket
(define addOne
  (lambda (x)
    (+ x 1)))


(foldl + 0 '(12 2 1 5))
(foldl - 0 '(1 2 3))


(define my-map
  (lambda (f lst)
    (if (null? lst)
        '()
        (cons (f (car lst))
              (my-map f (cdr lst))))))
(my-map addOne '(12 2 -3 0 9))

(define my-foldl
  (lambda (f init lst)
    (if (null? lst)
        init
        (my-foldl f  [f (car lst) init] [cdr lst]))))

(define my-foldr
  (lambda (f init lst)
    (if (null? lst)
        init
        (f (car lst) (my-foldr f init (cdr lst))))))


(my-foldl cons '() '(1 2 3 4))
(my-foldr cons '() '(1 2 3 4))

;; let, let*, letrec, WTF???
(define doit
  (lambda (x)
    (let ([a 3] [b 5])
      (+ a b x))))


(define doit2
  (lambda (x)
    (let* ([a 3] [b (+ a 1)])
      (+ a b x))))

(doit2 10)

(letrec ([is-even? (lambda (n)
                  (or (zero? n )
                      (is-odd? (sub1 n))))]
      [is-odd?  (lambda (n)
                  (and (not (zero? n))
                       (is-even? (sub1 n))))])
  (is-odd? 1))

;(letrec [(x y) (y 12)] x)

