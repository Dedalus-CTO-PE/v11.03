create table patecdaf
(
  dptedadm    varchar2(8) default ' ' not null,
  dptedepn    varchar2(2) default ' ' not null,
  dptedcnt    varchar2(3) default ' ' not null,
  ptedcode    varchar2(9) default ' ' not null,
  ptedtype    varchar2(1) default ' ' not null,
  dptedunq    varchar2(3) default ' ' not null,
  pteddtcd    varchar2(8) default ' ' not null,
  ptedoper    varchar2(4) default ' ' not null,
  ptedacdt    varchar2(8) default ' ' not null,
  ptedtime    varchar2(5) default ' ' not null,
  ptedcccl    varchar2(1) default ' ' not null,
  ptedusid    varchar2(10) default ' ' not null,
  pteddrgd    varchar2(1) default ' ' not null,
  pteddesc    varchar2(200) default ' ' not null,
  ptedoset    varchar2(1) default ' ' not null,
  ptedccfl    varchar2(2) default ' ' not null,
  ptedspar    varchar2(43) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patecda1 primary key( 
dptedadm,
dptedepn,
dptedcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patecda2 on patecdaf
(
dptedadm,
dptedunq,
dptedepn,
dptedcnt
)
  tablespace pas_indx; 
create unique index patecda3 on patecdaf
(
ptedcode,
dptedadm,
dptedunq,
dptedepn,
dptedcnt
)
  tablespace pas_indx; 
create unique index patecda4 on patecdaf
(
pteddtcd,
dptedadm,
dptedepn,
dptedcnt
)
  tablespace pas_indx; 
create unique index patecda5 on patecdaf
(
dptedadm,
ptedcode,
dptedepn,
dptedcnt
)
  tablespace pas_indx; 
