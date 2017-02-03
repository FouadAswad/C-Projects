
  f [] =[]
f (x:xs) = [1] ++ f xs
   count = foldr(+) 0.f


  or':: bool -> bool -> bool
  or' xs ys =True, if xs=True \/ ys=True
            =False, otherwise

    not:: bool -> bool
    not xs = ~xs


    and':: bool -> bool -> bool
    and' p q = not (or' (not p) (not q))

reflex xs [] =True
reflex [] ys =False
reflex xs (y:ys) = member xs (y,y) & reflex xs ys

