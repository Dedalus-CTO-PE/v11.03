create table sinimxaf
(
siixpor     char(2),
siixuni     char(3),
siixcst     char(5),
siixcat     char(7),
siixseq     char(4),
siixmax     decimal(14,2),
siixreq     decimal(14,2),
siixqoh     decimal(14,2),
siixur1     char(15),
siixur2     char(15),
siixud1     char(8),
siixud2     char(8),
siixuc1     char(3),
siixuc2     char(3),
siixuy1     char(1),
siixuy2     char(1),
siixwar     char(5),
siixresi    char(10),
siixspa     char(5),
lf          char(1)
);
create unique index sinimxa1 on sinimxaf
(
siixpor,
siixuni
);
create unique index sinimxa2 on sinimxaf
(
siixcat,
siixcst
);
create unique index sinimxa3 on sinimxaf
(
siixcst,
siixseq,
siixcat
);
revoke all on sinimxaf from public ; 
grant select on sinimxaf to public ; 
