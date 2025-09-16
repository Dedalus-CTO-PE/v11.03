create table patbrfaf
(
  dptbrbil    varchar2(8) default ' ' not null,
  ptbrdoct    varchar2(6) default ' ' not null,
  ptbronum    varchar2(8) default ' ' not null,
  ptbrauth    varchar2(15) default ' ' not null,
  ptbrtype    varchar2(3) default ' ' not null,
  ptbrfdoc    varchar2(20) default ' ' not null,
  ptbrspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbrfa1 primary key( 
dptbrbil)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
