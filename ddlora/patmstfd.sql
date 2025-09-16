create table patmstsf
(
  msward      varchar2(3) default ' ' not null,
  msdcls      varchar2(3) default ' ' not null,
  mswcls      varchar2(3) default ' ' not null,
  msdate      varchar2(6) default ' ' not null,
  msnprad     number(8,0) default 0 not null,
  msnpbad     number(8,0) default 0 not null,
  mstrin      number(8,0) default 0 not null,
  mstrout     number(8,0) default 0 not null,
  msdsch      number(8,0) default 0 not null,
  msnbday     number(8,0) default 0 not null,
  msbbday     number(8,0) default 0 not null,
  msdeath     number(8,0) default 0 not null,
  msbprad     number(8,0) default 0 not null,
  msbpbad     number(8,0) default 0 not null,
  mslvbd      number(8,0) default 0 not null,
  msaeadm     number(8,0) default 0 not null,
  msobsth     number(8,0) default 0 not null,
  msoutth     number(8,0) default 0 not null,
  msdymth     number(2,0) default 0 not null,
  msnopat     number(8,0) default 0 not null,
  mssepbd     number(8,0) default 0 not null,
  dmsacbdy    varchar2(8) default ' ' not null,
  msspare     varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmsts1 primary key( 
msward,
msdcls,
mswcls,
msdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmsts2 on patmstsf
(
msdcls,
mswcls,
msward,
msdate
)
  tablespace pas_indx; 
