create table pmsamnaf
(
  pmamreqn    varchar2(10) default ' ' not null,
  pmamurno    varchar2(8) default ' ' not null,
  pmamvisn    varchar2(8) default ' ' not null,
  pmamcatg    varchar2(2) default ' ' not null,
  pmamcode    varchar2(3) default ' ' not null,
  pmamcomm    varchar2(200) default ' ' not null,
  pmamcdat    varchar2(8) default ' ' not null,
  pmamctim    varchar2(8) default ' ' not null,
  pmamcuid    varchar2(10) default ' ' not null,
  pmamspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsamna1 primary key( 
pmamreqn,
pmamcatg,
pmamcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
