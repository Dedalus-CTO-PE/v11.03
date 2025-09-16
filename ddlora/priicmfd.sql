create table priicmaf
(
  pricinvn    varchar2(8) default ' ' not null,
  pricctyp    varchar2(3) default ' ' not null,
  pricnote    varchar2(6) default ' ' not null,
  pricidat    varchar2(8) default ' ' not null,
  pricitim    varchar2(8) default ' ' not null,
  priciusr    varchar2(10) default ' ' not null,
  priciocg    varchar2(3) default ' ' not null,
  pricdind    varchar2(1) default ' ' not null,
  pricddat    varchar2(8) default ' ' not null,
  pricdtim    varchar2(8) default ' ' not null,
  pricdusr    varchar2(10) default ' ' not null,
  pricdocg    varchar2(3) default ' ' not null,
  pricspar    varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priicma1 primary key( 
pricinvn,
pricctyp,
pricnote)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
