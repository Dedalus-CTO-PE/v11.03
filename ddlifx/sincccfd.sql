create table sincccaf
(
sicccst     char(5),
sicclin     char(3),
sicccom     char(78),
siccspa     char(10),
lf          char(1)
);
create unique index sinccca1 on sincccaf
(
sicccst,
sicclin
);
revoke all on sincccaf from public ; 
grant select on sincccaf to public ; 
