drop table newdgwaf;
create table newdgwaf
(
  ptdwdrgc    varchar2(4) default ' ' not null,
  ptdwmdcc    varchar2(4) default ' ' not null,
  ptdwdesc    varchar2(60) default ' ' not null,
  ptdwlowt    number(5,2) default 0 not null,
  ptdwhigh    number(5,2) default 0 not null,
  ptdwrwgt    number(9,6) default 0 not null,
  ptdwclsp    varchar2(2) default ' ' not null,
  ptdwdrgv    varchar2(3) default ' ' not null,
  ptdwwtep    varchar2(1) default ' ' not null,
  ptdwspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint newdgwa1 primary key( 
ptdwdrgc,
ptdwdrgv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index newdgwa2 on newdgwaf
(
ptdwmdcc,
ptdwdrgc,
ptdwdrgv
)
  tablespace pas_indx; 
create unique index newdgwa3 on newdgwaf
(
ptdwdesc,
ptdwdrgc,
ptdwdrgv
)
  tablespace pas_indx; 
