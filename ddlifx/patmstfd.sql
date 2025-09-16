create table patmstsf
(
msward      char(3),
msdcls      char(3),
mswcls      char(3),
msdate      char(6),
msnprad     decimal(8,0),
msnpbad     decimal(8,0),
mstrin      decimal(8,0),
mstrout     decimal(8,0),
msdsch      decimal(8,0),
msnbday     decimal(8,0),
msbbday     decimal(8,0),
msdeath     decimal(8,0),
msbprad     decimal(8,0),
msbpbad     decimal(8,0),
mslvbd      decimal(8,0),
msaeadm     decimal(8,0),
msobsth     decimal(8,0),
msoutth     decimal(8,0),
msdymth     decimal(2,0),
msnopat     decimal(8,0),
mssepbd     decimal(8,0),
dmsacbdy    char(8),
msspare     char(19),
lf          char(1)
);
create unique index patmsts1 on patmstsf
(
msward,
msdcls,
mswcls,
msdate
);
create unique index patmsts2 on patmstsf
(
msdcls,
mswcls,
msward,
msdate
);
revoke all on patmstsf from public ; 
grant select on patmstsf to public ; 
