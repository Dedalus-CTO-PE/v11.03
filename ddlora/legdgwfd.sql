create table legdgwaf
(
  lptdwdrg    varchar2(4) default ' ' not null,
  lptdwmdc    varchar2(4) default ' ' not null,
  lptdwdes    varchar2(60) default ' ' not null,
  lptdwlow    number(5,2) default 0 not null,
  lptdwhig    number(5,2) default 0 not null,
  lptdwrwg    number(9,6) default 0 not null,
  lptdwcls    varchar2(2) default ' ' not null,
  lptdwdgv    varchar2(3) default ' ' not null,
  lptdwspa    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legdgwa1 primary key( 
lptdwdrg,
lptdwdgv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legdgwa2 on legdgwaf
(
lptdwmdc,
lptdwdrg,
lptdwdgv
)
  tablespace pas_indx; 
create unique index legdgwa3 on legdgwaf
(
lptdwdes,
lptdwdrg,
lptdwdgv
)
  tablespace pas_indx; 
