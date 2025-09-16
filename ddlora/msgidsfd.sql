create table msgidsaf
(
  msidmlid    varchar2(8) default ' ' not null,
  msidsnam    varchar2(20) default ' ' not null,
  msidgnam    varchar2(25) default ' ' not null,
  msidspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint msgidsa1 primary key( 
msidmlid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
