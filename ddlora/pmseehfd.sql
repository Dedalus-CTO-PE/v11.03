create table pmseehaf
(
pmhearid    varchar2(20),
pmherptc    varchar2(3),
pmhectid    varchar2(24),
pmhebenl    varchar2(1),
pmhecfac    varchar2(1),
pmhecpam    varchar2(9),
pmhecpdr    varchar2(4),
pmhecpdi    varchar2(1),
pmhecpfn    varchar2(40),
pmhecpmn    varchar2(10),
pmhecprn    varchar2(1),
pmheexam    varchar2(9),
pmheeadi    varchar2(1),
pmheexba    varchar2(9),
pmheexdi    varchar2(1),
pmhefsta    varchar2(1),
pmhefrid    varchar2(12),
pmhefscd    varchar2(4),
pmhemscd    varchar2(4),
pmhepeai    varchar2(1),
pmhepscd    varchar2(30),
pmhetnam    varchar2(80),
pmhetbdi    varchar2(1),
pmhetbsc    varchar2(15),
pmhevcid    varchar2(2),
pmheudte    varchar2(8),
pmheutim    varchar2(8),
pmhespar    varchar2(30),
lf          varchar2(1),
constraint pmseeha1 primary key( 
pmhearid,
pmherptc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmseehaf for pmseehaf;
