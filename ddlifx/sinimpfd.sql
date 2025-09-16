create table sinaudim
(
siimaudd    char(8),
siimaudt    char(8),
siimaudp    char(2),
siimaudr    char(1),
siimauds    decimal(1,0),
siimaudo    char(4),
siimcst     char(5),
siimcat     char(7),
siimseq     char(4),
siimmax     decimal(14,2),
siimreq     decimal(14,2),
siimqoh     decimal(14,2),
siimur1     char(15),
siimur2     char(15),
siimud1     char(8),
siimud2     char(8),
siimuc1     char(3),
siimuc2     char(3),
siimuy1     char(1),
siimuy2     char(1),
siimwar     char(5),
siimspa     char(15),
lf          char(1)
);
create index sinaudim on sinaudim
(
siimaudd,
siimaudt,
siimaudp,
siimaudr
);
revoke all on sinaudim from public ; 
grant select on sinaudim to public ; 
create table sinimpaf
(
siimcst     char(5),
siimcat     char(7),
siimseq     char(4),
siimmax     decimal(14,2),
siimreq     decimal(14,2),
siimqoh     decimal(14,2),
siimur1     char(15),
siimur2     char(15),
siimud1     char(8),
siimud2     char(8),
siimuc1     char(3),
siimuc2     char(3),
siimuy1     char(1),
siimuy2     char(1),
siimwar     char(5),
siimspa     char(15),
lf          char(1)
);
create unique index sinimpa1 on sinimpaf
(
siimcst,
siimcat
);
create unique index sinimpa2 on sinimpaf
(
siimcat,
siimcst
);
create unique index sinimpa3 on sinimpaf
(
siimcst,
siimseq,
siimcat
);
revoke all on sinimpaf from public ; 
grant select on sinimpaf to public ; 
