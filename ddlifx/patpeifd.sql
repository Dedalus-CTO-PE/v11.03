create table patpeiaf
(
ptpestdt    char(8),
dptpeadm    char(8),
dptpesta    char(1),
ptpedate    char(8),
ptperesn    char(3),
ptpeoper    char(10),
ptpespar    char(50),
lf          char(1)
);
create unique index patpeio1 on patpeiaf
(
ptpestdt,
dptpeadm
);
create unique index patpeio2 on patpeiaf
(
ptpestdt,
dptpesta,
dptpeadm
);
create unique index patpeio3 on patpeiaf
(
dptpeadm,
ptpestdt
);
revoke all on patpeiaf from public ; 
grant select on patpeiaf to public ; 
