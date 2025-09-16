create table allhbtaf
(
  alhbfnam    varchar2(20) default ' ' not null,
  alhbbnum    varchar2(20) default ' ' not null,
  alhbstat    varchar2(1) default ' ' not null,
  alhburno    varchar2(8) default ' ' not null,
  alhbnbtn    varchar2(20) default ' ' not null,
  alhbpbtn    varchar2(20) default ' ' not null,
  alhbspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allhbta1 primary key( 
alhbfnam,
alhbbnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allhbta2 on allhbtaf
(
alhbbnum,
alhbfnam
)
  tablespace pas_indx; 
