create table patdasaf
(
  dptdaref    varchar2(2) default ' ' not null,
  ptdadate    varchar2(6) default ' ' not null,
  ptdacode    varchar2(3) default ' ' not null,
  ptdaadlt    number(8,0) default 0 not null,
  ptdachld    number(8,0) default 0 not null,
  ptdamale    number(8,0) default 0 not null,
  ptdafeml    number(8,0) default 0 not null,
  ptdaunkn    number(8,0) default 0 not null,
  ptdaindt    number(8,0) default 0 not null,
  ptdaitsx    number(8,0) default 0 not null,
  ptdaspar    varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdasa1 primary key( 
dptdaref,
ptdadate,
ptdacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
