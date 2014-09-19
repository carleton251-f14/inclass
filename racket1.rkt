#lang racket
(define list-length
  (lambda (lst)
    (if (null? lst)
        0   ;; if condition is true
        (+ 1 (list-length (cdr lst))))))

;; return the nth number of a list -- 0 indexed
(define nth
  (lambda (n lst)
    (cond [(>= n (length lst)) #f]
          [(equal? n 0) (car lst)]
          [else (nth (- n 1) (cdr lst))])))

(define remove-first
  (lambda (s lst)
    (cond [(null? lst) lst]
          [(equal? s (car lst)) (cdr lst)]
          [else (cons (car lst) (remove-first s (cdr lst)))])))
    
(define remove-all
  (lambda (s lst)
    (cond [(null? lst) lst]
          [(equal? s (car lst)) (remove-all s(cdr lst))]
          [else (cons (car lst) (remove-all s (cdr lst)))])))
    
(define subst
  (lambda (old new input)
    (cond [(null? input) input]
          [(equal? input old) new]
          [(list? input)  (cons (subst old new (car input))
                                (subst old new (cdr input)))]
          [else input])))

;;; Produce subsets of a set, which is represented as a list
(define subsets
  (lambda (lst)
    (if (null? lst) '(())
        (append (subsets (cdr lst))
                (cons-each (car lst) (subsets (cdr lst)))))))

;; cons-each produces a list where the first parameters is inserted into each list within
(define cons-each
  (lambda (s lst)
    (if (null? lst)
        lst
        (cons (cons s (car lst))
              (cons-each s (cdr lst))))))
