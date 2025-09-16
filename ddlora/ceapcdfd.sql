create table ceapcdaf
(
  cepcdrgc    varchar2(4) default ' ' not null,
  cepcnur     number(12,2) default 0 not null,
  cepcthe     number(12,2) default 0 not null,
  cepcpha     number(12,2) default 0 not null,
  cepcicu     number(12,2) default 0 not null,
  cepcall     number(12,2) default 0 not null,
  cepcmss     number(12,2) default 0 not null,
  cepctax     number(12,2) default 0 not null,
  cepcovh     number(12,2) default 0 not null,
  cepccat     number(12,2) default 0 not null,
  cepcdep     number(12,2) default 0 not null,
  cepcoth     number(12,2) default 0 not null,
  cepcalos    number(8,2) default 0 not null,
  cepcnwg     number(10,4) default 0 not null,
  cepcspa     varchar2(39) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceapcda1 primary key( 
cepcdrgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
