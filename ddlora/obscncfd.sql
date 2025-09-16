create table obscncaf
(
  obcctyp     varchar2(3) default ' ' not null,
  obccdes     varchar2(35) default ' ' not null,
  obcctmi     varchar2(3) default ' ' not null,
  obcctmo     varchar2(3) default ' ' not null,
  obccslv     varchar2(2) default ' ' not null,
  obccdhl     varchar2(3) default ' ' not null,
  obcdtyp     varchar2(2) default ' ' not null,
  obccspa     varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obscnca1 primary key( 
obcctyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index obscnca2 on obscncaf
(
obccdes,
obcctyp
)
  tablespace pas_indx; 
