create table pmsaupaf
(
pmapurno    char(8),
pmappnum    char(5),
pmapwuid    char(10),
pmapdate    char(8),
pmaptime    char(5),
pmapacty    char(1),
pmapaccd    char(3),
pmapcomm    char(40),
pmapspar    char(40),
lf          char(1)
);
create unique index pmsaupa1 on pmsaupaf
(
pmapurno,
pmappnum,
pmapdate,
pmaptime,
pmapwuid
);
revoke all on pmsaupaf from public ; 
grant select on pmsaupaf to public ; 
