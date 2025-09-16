create table pmsedbaf
(
  pmdbuniq    varchar2(20) default ' ' not null,
  pmdbprid    varchar2(8) default ' ' not null,
  pmdbwbid    varchar2(8) default ' ' not null,
  pmdbnval    number(18,4) default 0 not null,
  pmdbdval    varchar2(8) default ' ' not null,
  pmdbvalu    varchar2(600) default ' ' not null,
  pmdbspar    varchar2(200) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsedba1 primary key( 
pmdbuniq,
pmdbprid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
