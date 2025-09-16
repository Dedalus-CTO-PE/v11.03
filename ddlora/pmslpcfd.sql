create table pmslpcaf
(
pmlpuni     varchar2(5),
pmlpadm     varchar2(8),
pmlpurn     varchar2(8),
pmlplpn     varchar2(3),
pmlpcno     number(3,0),
pmlpstc     varchar2(6),
pmlprep     number(2,0),
pmlplty     varchar2(10),
pmlpfpn     varchar2(3),
pmlppsc     varchar2(4),
pmlpspa     varchar2(23),
lf          varchar2(1),
constraint pmslpca1 primary key( 
pmlpuni)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmslpcaf for pmslpcaf;
