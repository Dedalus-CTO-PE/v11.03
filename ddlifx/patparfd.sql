create table patparaf
(
ptprcode    char(3),
ptprtype    char(1),
ptprname    char(40),
ptprcnum    char(19),
ptprdupd    char(8),
ptprspar    char(28),
lf          char(1)
);
create unique index patpara1 on patparaf
(
ptprcode
);
create unique index patpara2 on patparaf
(
ptprname,
ptprcode
);
revoke all on patparaf from public ; 
grant select on patparaf to public ; 
