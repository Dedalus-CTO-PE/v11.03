create table sinciiaf
(
siiiwar     char(5),
siiicat     char(7),
siiipur     char(7),
siiidat     char(8),
siiiqr      decimal(14,2),
siiiqi      decimal(14,2),
siiiuct     decimal(16,4),
siiibat     char(20),
siiispa     char(20),
lf          char(1)
);
create unique index sinciia1 on sinciiaf
(
siiiwar,
siiicat,
siiipur,
siiidat
);
revoke all on sinciiaf from public ; 
grant select on sinciiaf to public ; 
