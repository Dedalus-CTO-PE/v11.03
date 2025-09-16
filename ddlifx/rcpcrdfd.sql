create table rcpcrdaf
(
crddate     char(8),
dcrdflag    char(1),
crdcode     char(3),
crdrecno    char(12),
dcrdcoun    char(2),
crdname     char(20),
dcrdamnt    decimal(14,2),
crdstat     decimal(1,0),
lf          char(1)
);
create unique index rcpcrda1 on rcpcrdaf
(
crddate,
dcrdflag,
crdcode,
crdrecno,
dcrdcoun
);
revoke all on rcpcrdaf from public ; 
grant select on rcpcrdaf to public ; 
