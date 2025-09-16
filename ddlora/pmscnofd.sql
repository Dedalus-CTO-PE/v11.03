create table pmscnoaf
(
  pmcncrno    varchar2(8) default ' ' not null,
  pmcndate    varchar2(8) default ' ' not null,
  pmcnvisn    varchar2(8) default ' ' not null,
  pmcninvn    varchar2(8) default ' ' not null,
  pmcnsyst    varchar2(2) default ' ' not null,
  pmcnstat    varchar2(1) default ' ' not null,
  pmcnreas    varchar2(3) default ' ' not null,
  pmcnamnt    number(14,2) default 0 not null,
  pmcngstm    number(14,2) default 0 not null,
  pmcncdat    varchar2(8) default ' ' not null,
  pmcnctim    varchar2(8) default ' ' not null,
  pmcncuid    varchar2(10) default ' ' not null,
  pmcnspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmscnoa1 primary key( 
pmcncrno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmscnoaf for pmscnoaf;
create unique index pmscnoa2 on pmscnoaf
(
pmcnvisn,
pmcncrno
)
  tablespace pas_indx; 
create unique index pmscnoa3 on pmscnoaf
(
pmcninvn,
pmcncrno
)
  tablespace pas_indx; 
create unique index pmscnoa4 on pmscnoaf
(
pmcndate,
pmcnsyst,
pmcncrno
)
  tablespace pas_indx; 
