create table patecoaf
(
  dpteoadm    varchar2(8) default ' ' not null,
  dpteoepn    varchar2(2) default ' ' not null,
  dpteocnt    varchar2(3) default ' ' not null,
  pteocode    varchar2(9) default ' ' not null,
  pteotype    varchar2(1) default ' ' not null,
  dpteounq    varchar2(3) default ' ' not null,
  pteodtcd    varchar2(8) default ' ' not null,
  pteooper    varchar2(4) default ' ' not null,
  pteodate    varchar2(8) default ' ' not null,
  pteosttm    varchar2(5) default ' ' not null,
  pteoedtm    varchar2(5) default ' ' not null,
  pteotime    varchar2(5) default ' ' not null,
  pteousid    varchar2(10) default ' ' not null,
  pteodrgd    varchar2(1) default ' ' not null,
  pteodesc    varchar2(200) default ' ' not null,
  pteoclin    varchar2(10) default ' ' not null,
  pteoccfl    varchar2(2) default ' ' not null,
  pteospar    varchar2(36) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patecoa1 primary key( 
dpteoadm,
dpteoepn,
dpteocnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patecoa2 on patecoaf
(
dpteoadm,
dpteounq,
dpteoepn,
dpteocnt
)
  tablespace pas_indx; 
create unique index patecoa3 on patecoaf
(
pteocode,
dpteoadm,
dpteounq,
dpteoepn,
dpteocnt
)
  tablespace pas_indx; 
create unique index patecoa4 on patecoaf
(
pteodtcd,
dpteoadm,
dpteoepn,
dpteocnt
)
  tablespace pas_indx; 
