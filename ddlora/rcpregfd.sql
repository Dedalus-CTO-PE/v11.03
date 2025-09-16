create table rcpregaf
(
  regcode     varchar2(3) default ' ' not null,
  regdesc     varchar2(35) default ' ' not null,
  regchqcd    varchar2(15) default ' ' not null,
  reggenld    varchar2(14) default ' ' not null,
  reggenbk    varchar2(14) default ' ' not null,
  reggroup    varchar2(3) default ' ' not null,
  regibacd    number(2,0) default 0 not null,
  regsundt    number(2,0) default 0 not null,
  regdiss     varchar2(5) default ' ' not null,
  regresp     varchar2(4) default ' ' not null,
  reggends    varchar2(14) default ' ' not null,
  reggst      varchar2(6) default ' ' not null,
  registrg    varchar2(2) default ' ' not null,
  reghosp     varchar2(3) default ' ' not null,
  regactiv    varchar2(1) default ' ' not null,
  reggendb    varchar2(14) default ' ' not null,
  reggengs    varchar2(14) default ' ' not null,
  rcrecsur    varchar2(3) default ' ' not null,
  regspare    varchar2(47) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint rcprega1 primary key( 
regcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index rcprega2 on rcpregaf
(
reggroup,
regcode
)
  tablespace pas_indx; 
create unique index rcprega3 on rcpregaf
(
registrg,
regcode
)
  tablespace pas_indx; 
create unique index rcprega4 on rcpregaf
(
regdesc,
regcode
)
  tablespace pas_indx; 
