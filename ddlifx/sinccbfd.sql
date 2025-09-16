create table sinccbaf
(
sicbcst     char(5),
sicbdat     char(6),
sicbamt     decimal(14,2),
sicbbud     decimal(14,2),
sicbspar    char(18),
lf          char(1)
);
create unique index sinccba1 on sinccbaf
(
sicbcst,
sicbdat
);
revoke all on sinccbaf from public ; 
grant select on sinccbaf to public ; 
