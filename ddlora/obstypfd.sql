create table obstypaf
(
  obtytype    varchar2(3) default ' ' not null,
  obtydesc    varchar2(25) default ' ' not null,
  obtytmad    varchar2(3) default ' ' not null,
  obtytmup    varchar2(3) default ' ' not null,
  obtyactv    varchar2(1) default ' ' not null,
  obtyspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obstypa1 primary key( 
obtytype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
