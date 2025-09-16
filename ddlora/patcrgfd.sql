create table patcrgaf
(
  dptcradn    varchar2(8) default ' ' not null,
  ptcrurno    varchar2(8) default ' ' not null,
  ptcrmult    varchar2(3) default ' ' not null,
  ptcrstay    number(2,0) default 0 not null,
  ptcrvert    varchar2(1) default ' ' not null,
  ptcrprim    varchar2(9) default ' ' not null,
  ptcrhist    varchar2(9) default ' ' not null,
  ptcrspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcrga1 primary key( 
dptcradn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcrga2 on patcrgaf
(
ptcrurno,
dptcradn
)
  tablespace pas_indx; 
