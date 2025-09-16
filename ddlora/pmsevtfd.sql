create table pmsevtaf
(
pmevvisn    varchar2(8),
pmevevnt    varchar2(3),
pmevadte    varchar2(8),
pmevatim    varchar2(8),
pmevacon    varchar2(10),
pmevpprb    varchar2(60),
pmevunit    varchar2(3),
pmevsphn    varchar2(20),
pmevploc    varchar2(3),
pmevpwrd    varchar2(3),
pmevpbed    varchar2(3),
pmevddte    varchar2(8),
pmevdtim    varchar2(8),
pmevsite    varchar2(6),
pmevctyp    varchar2(6),
pmevclid    varchar2(6),
pmevccod    varchar2(3),
pmevatyp    varchar2(3),
pmevastt    varchar2(1),
pmevadmt    varchar2(3),
pmevbtyp    varchar2(3),
pmevrefb    varchar2(10),
pmevdstt    varchar2(3),
pmevhosn    varchar2(3),
pmevspar    varchar2(37),
lf          varchar2(1),
constraint pmsevta1 primary key( 
pmevvisn)
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
create public synonym pmsevtaf for pmsevtaf;
create unique index pmsevta2 on pmsevtaf
(
pmevploc,
pmevddte,
pmevvisn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pmsevta3 on pmsevtaf
(
pmevpwrd,
pmevddte,
pmevvisn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pmsevta4 on pmsevtaf
(
pmevadte,
pmevvisn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index pmsevta5 on pmsevtaf
(
pmevpwrd,
pmevpbed,
pmevvisn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
