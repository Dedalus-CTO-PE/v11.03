create table pmseehaf
(
pmhearid    char(20),
pmherptc    char(3),
pmhectid    char(24),
pmhebenl    char(1),
pmhecfac    char(1),
pmhecpam    char(9),
pmhecpdr    char(4),
pmhecpdi    char(1),
pmhecpfn    char(40),
pmhecpmn    char(10),
pmhecprn    char(1),
pmheexam    char(9),
pmheeadi    char(1),
pmheexba    char(9),
pmheexdi    char(1),
pmhefsta    char(1),
pmhefrid    char(12),
pmhefscd    char(4),
pmhemscd    char(4),
pmhepeai    char(1),
pmhepscd    char(30),
pmhetnam    char(80),
pmhetbdi    char(1),
pmhetbsc    char(15),
pmhevcid    char(2),
pmheudte    char(8),
pmheutim    char(8),
pmhespar    char(30),
lf          char(1)
);
create unique index pmseeha1 on pmseehaf
(
pmhearid,
pmherptc
);
revoke all on pmseehaf from public ; 
grant select on pmseehaf to public ; 
