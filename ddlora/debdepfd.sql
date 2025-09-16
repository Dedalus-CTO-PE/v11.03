create table debaudde
(
  dbdeaudd    varchar2(8) default ' ' not null,
  dbdeaudt    varchar2(8) default ' ' not null,
  dbdeaudp    varchar2(2) default ' ' not null,
  dbdeaudr    varchar2(1) default ' ' not null,
  dbdeauds    number(1,0) default 0 not null,
  dbdeaudo    varchar2(4) default ' ' not null,
  dbdedep     varchar2(8) default ' ' not null,
  dbdedes     varchar2(35) default ' ' not null,
  dbdeact     number(1,0) default 0 not null,
  dbdeur1     varchar2(25) default ' ' not null,
  dbdeur2     varchar2(25) default ' ' not null,
  dbdeud1     varchar2(8) default ' ' not null,
  dbdeud2     varchar2(8) default ' ' not null,
  dbdeuy1     varchar2(1) default ' ' not null,
  dbdeuy2     varchar2(1) default ' ' not null,
  dbdeuc1     varchar2(3) default ' ' not null,
  dbdeuc2     varchar2(3) default ' ' not null,
  dbdespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index debaudde on debaudde
(
dbdeaudd,
dbdeaudt,
dbdeaudp,
dbdeaudr
)
tablespace pas_indx; 
create table debdepaf
(
  dbdedep     varchar2(8) default ' ' not null,
  dbdedes     varchar2(35) default ' ' not null,
  dbdeact     number(1,0) default 0 not null,
  dbdeur1     varchar2(25) default ' ' not null,
  dbdeur2     varchar2(25) default ' ' not null,
  dbdeud1     varchar2(8) default ' ' not null,
  dbdeud2     varchar2(8) default ' ' not null,
  dbdeuy1     varchar2(1) default ' ' not null,
  dbdeuy2     varchar2(1) default ' ' not null,
  dbdeuc1     varchar2(3) default ' ' not null,
  dbdeuc2     varchar2(3) default ' ' not null,
  dbdespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debdepa1 primary key( 
dbdedep)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debdepa2 on debdepaf
(
dbdedes,
dbdedep
)
  tablespace pas_indx; 
