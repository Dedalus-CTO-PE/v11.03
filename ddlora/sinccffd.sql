create table sinccfaf
(
  sicfcst     varchar2(5) default ' ' not null,
  sicfsub     varchar2(5) default ' ' not null,
  sicfdat     varchar2(6) default ' ' not null,
  sicfamt     number(14,2) default 0 not null,
  sicfbud     number(14,2) default 0 not null,
  sicfspar    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinccfa1 primary key( 
sicfcst,
sicfdat,
sicfsub)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinccfa2 on sinccfaf
(
sicfcst,
sicfsub,
sicfdat
)
  tablespace pas_indx; 
