create table pmslhiaf
(
pmlhvisn    varchar2(8),
pmlhdate    varchar2(8),
pmlhletn    varchar2(3),
pmlhspar    varchar2(50),
lf          varchar2(1),
constraint pmslhia1 primary key( 
pmlhvisn,
pmlhdate,
pmlhletn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmslhiaf for pmslhiaf;
