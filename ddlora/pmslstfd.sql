create table pmslstaf
(
pmlsseid    varchar2(4),
pmlsadmn    varchar2(8),
pmlsdlst    varchar2(1),
pmlsspar    varchar2(20),
lf          varchar2(1),
constraint pmslsta1 primary key( 
pmlsseid,
pmlsadmn)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmslstaf for pmslstaf;
