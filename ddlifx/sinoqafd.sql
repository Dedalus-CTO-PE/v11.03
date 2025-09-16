create table sinoqaaf
(
siqacst     char(5),
siqarid     char(8),
siqacat     char(7),
siqaunt     char(15),
siqapd      char(30),
siqapn      char(30),
siqaqty     decimal(14,2),
siqasta     char(3),
siqauid     char(4),
siqadat     char(8),
siqatim     char(5),
siqapor     char(2),
siqansmo    char(10),
siqansms    char(3),
siqaspa     char(17),
lf          char(1)
);
create unique index sinoqaa1 on sinoqaaf
(
siqacst,
siqarid
);
revoke all on sinoqaaf from public ; 
grant select on sinoqaaf to public ; 
