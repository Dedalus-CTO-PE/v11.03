create table webemdaf
(
  wbevarid    varchar2(20) default ' ' not null,
  wbevrptc    varchar2(3) default ' ' not null,
  wbevmevc    varchar2(2) default ' ' not null,
  wbevmeid    varchar2(2) default ' ' not null,
  wbevtrid    varchar2(24) default ' ' not null,
  wbevmsid    varchar2(36) default ' ' not null,
  wbevspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webemda1 primary key( 
wbevarid,
wbevrptc,
wbevmevc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webemda2 on webemdaf
(
wbevtrid,
wbevarid,
wbevrptc,
wbevmevc
)
  tablespace pas_indx; 
create unique index webemda3 on webemdaf
(
wbevmsid,
wbevarid,
wbevrptc,
wbevmevc
)
  tablespace pas_indx; 
