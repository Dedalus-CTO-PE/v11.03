create table pmsemsaf
(
  pmemvisn    varchar2(8) default ' ' not null,
  pmemadat    varchar2(8) default ' ' not null,
  pmematim    varchar2(8) default ' ' not null,
  pmemlysi    varchar2(1) default ' ' not null,
  pmemsily    varchar2(1) default ' ' not null,
  pmemsist    varchar2(1) default ' ' not null,
  pmemstan    varchar2(1) default ' ' not null,
  pmemgait    varchar2(1) default ' ' not null,
  pmemtwlk    varchar2(1) default ' ' not null,
  pmemfunr    varchar2(1) default ' ' not null,
  pmemstps    varchar2(1) default ' ' not null,
  pmemgugo    varchar2(4) default ' ' not null,
  pmemcdat    varchar2(8) default ' ' not null,
  pmemctim    varchar2(8) default ' ' not null,
  pmemcuid    varchar2(10) default ' ' not null,
  pmemudat    varchar2(8) default ' ' not null,
  pmemutim    varchar2(8) default ' ' not null,
  pmemuuid    varchar2(10) default ' ' not null,
  pmemspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsemsa1 primary key( 
pmemvisn,
pmemadat,
pmematim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
