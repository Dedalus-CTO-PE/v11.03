create table websesaf
(
  wbssarid    varchar2(20) default ' ' not null,
  wbssrptc    varchar2(3) default ' ' not null,
  wbssscod    varchar2(11) default ' ' not null,
  wbsssrvc    varchar2(3) default ' ' not null,
  wbsssctc    varchar2(1) default ' ' not null,
  wbsssvid    varchar2(4) default ' ' not null,
  wbsscamt    varchar2(9) default ' ' not null,
  wbsssdte    varchar2(8) default ' ' not null,
  wbssfbam    varchar2(9) default ' ' not null,
  wbssitem    varchar2(5) default ' ' not null,
  wbssmbam    varchar2(9) default ' ' not null,
  wbssmexc    varchar2(3) default ' ' not null,
  wbsssfac    varchar2(1) default ' ' not null,
  wbsssfee    varchar2(9) default ' ' not null,
  wbsstrid    varchar2(24) default ' ' not null,
  wbssmsid    varchar2(36) default ' ' not null,
  wbssspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint websesa1 primary key( 
wbssarid,
wbssrptc,
wbssscod,
wbsssrvc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index websesa2 on websesaf
(
wbsstrid,
wbssarid,
wbssrptc,
wbssscod,
wbsssrvc
)
  tablespace pas_indx; 
create unique index websesa3 on websesaf
(
wbssmsid,
wbssarid,
wbssrptc,
wbssscod,
wbsssrvc
)
  tablespace pas_indx; 
