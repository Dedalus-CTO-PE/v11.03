create table nzprfnaf
(
nzfihosp    char(3),
nzfisyst    char(1),
nzfisite    char(6),
nzfiyear    char(4),
nzfitype    char(1),
nzficode    char(13),
nzfiperd    decimal(16,2),
nzfimth1    decimal(16,2),
nzfimth2    decimal(16,2),
nzfimth3    decimal(16,2),
nzfimth4    decimal(16,2),
nzfimth5    decimal(16,2),
nzfimth6    decimal(16,2),
nzfimth7    decimal(16,2),
nzfimth8    decimal(16,2),
nzfimth9    decimal(16,2),
nzfimt10    decimal(16,2),
nzfimt11    decimal(16,2),
nzfimt12    decimal(16,2),
nzfimt13    decimal(16,2),
nzfilsyr    decimal(16,2),
nzfispar    char(30),
lf          char(1)
);
create unique index nzprfna1 on nzprfnaf
(
nzfisyst,
nzfisite,
nzfiyear,
nzfitype,
nzficode,
nzfihosp
);
create unique index nzprfna2 on nzprfnaf
(
nzfihosp,
nzfisyst,
nzfisite,
nzfiyear,
nzfitype,
nzficode
);
revoke all on nzprfnaf from public ; 
grant select on nzprfnaf to public ; 
