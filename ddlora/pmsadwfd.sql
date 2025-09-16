create table pmsadwaf
(
  pmawvisn    varchar2(8) default ' ' not null,
  pmawtype    varchar2(3) default ' ' not null,
  pmawoldv    varchar2(250) default ' ' not null,
  pmawnewv    varchar2(250) default ' ' not null,
  pmawcdat    varchar2(8) default ' ' not null,
  pmawctim    varchar2(8) default ' ' not null,
  pmawcuid    varchar2(10) default ' ' not null,
  pmawspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsadwa1 primary key( 
pmawcdat,
pmawctim,
pmawvisn,
pmawtype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsadwa2 on pmsadwaf
(
pmawvisn,
pmawtype,
pmawcdat,
pmawctim
)
  tablespace pas_indx; 
