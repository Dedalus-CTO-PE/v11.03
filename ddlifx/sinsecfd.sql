create table sinsecaf
(
sisecon     char(10),
siselin     char(3),
sisecom     char(78),
sisespa     char(20),
lf          char(1)
);
create unique index sinseca1 on sinsecaf
(
sisecon,
siselin
);
revoke all on sinsecaf from public ; 
grant select on sinsecaf to public ; 
