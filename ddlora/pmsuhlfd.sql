create table pmsuhlaf
(
  pmultype    varchar2(1) default ' ' not null,
  pmulwdcd    varchar2(3) default ' ' not null,
  pmulbdcd    varchar2(3) default ' ' not null,
  pmuluhid    varchar2(20) default ' ' not null,
  pmulspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsuhla1 primary key( 
pmultype,
pmulwdcd,
pmulbdcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsuhla2 on pmsuhlaf
(
pmuluhid,
pmultype,
pmulwdcd,
pmulbdcd
)
  tablespace pas_indx; 
