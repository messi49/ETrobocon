#
#  TOPPERS/ASP Kernel
#      Toyohashi Open Platform for Embedded Real-Time Systems/
#      Advanced Standard Profile Kernel
# 
#  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
#                              Toyohashi Univ. of Technology, JAPAN
#  Copyright (C) 2006-2009 by Embedded and Real-Time Systems Laboratory
#              Graduate School of Information Science, Nagoya Univ., JAPAN
# 
#  �嵭����Ԥϡ��ʲ���(1)��(4)�ξ������������˸¤ꡤ�ܥ��եȥ���
#  �����ܥ��եȥ���������Ѥ�����Τ�ޤࡥ�ʲ�Ʊ���ˤ���ѡ�ʣ������
#  �ѡ������ۡʰʲ������ѤȸƤ֡ˤ��뤳�Ȥ�̵���ǵ������롥
#  (1) �ܥ��եȥ������򥽡��������ɤη������Ѥ�����ˤϡ��嵭������
#      ��ɽ�����������Ѿ�浪��Ӳ�����̵�ݾڵ��꤬�����Τޤޤη��ǥ���
#      ����������˴ޤޤ�Ƥ��뤳�ȡ�
#  (2) �ܥ��եȥ������򡤥饤�֥������ʤɡ�¾�Υ��եȥ�������ȯ�˻�
#      �ѤǤ�����Ǻ����ۤ�����ˤϡ������ۤ�ȼ���ɥ�����ȡ�����
#      �ԥޥ˥奢��ʤɡˤˡ��嵭�����ɽ�����������Ѿ�浪��Ӳ���
#      ��̵�ݾڵ����Ǻܤ��뤳�ȡ�
#  (3) �ܥ��եȥ������򡤵�����Ȥ߹���ʤɡ�¾�Υ��եȥ�������ȯ�˻�
#      �ѤǤ��ʤ����Ǻ����ۤ�����ˤϡ����Τ����줫�ξ�����������
#      �ȡ�
#    (a) �����ۤ�ȼ���ɥ�����ȡ����Ѽԥޥ˥奢��ʤɡˤˡ��嵭����
#        �ɽ�����������Ѿ�浪��Ӳ�����̵�ݾڵ����Ǻܤ��뤳�ȡ�
#    (b) �����ۤη��֤��̤�������ˡ�ˤ�äơ�TOPPERS�ץ��������Ȥ�
#        ��𤹤뤳�ȡ�
#  (4) �ܥ��եȥ����������Ѥˤ��ľ��Ū�ޤ��ϴ���Ū�������뤤���ʤ�»
#      ������⡤�嵭����Ԥ����TOPPERS�ץ��������Ȥ����դ��뤳�ȡ�
#      �ޤ����ܥ��եȥ������Υ桼���ޤ��ϥ���ɥ桼������Τ����ʤ���
#      ͳ�˴�Ť����ᤫ��⡤�嵭����Ԥ����TOPPERS�ץ��������Ȥ�
#      ���դ��뤳�ȡ�
# 
#  �ܥ��եȥ������ϡ�̵�ݾڤ��󶡤���Ƥ����ΤǤ��롥�嵭����Ԥ�
#  ���TOPPERS�ץ��������Ȥϡ��ܥ��եȥ������˴ؤ��ơ�����λ�����Ū
#  ���Ф���Ŭ������ޤ�ơ������ʤ��ݾڤ�Ԥ�ʤ����ޤ����ܥ��եȥ���
#  �������Ѥˤ��ľ��Ū�ޤ��ϴ���Ū�������������ʤ�»���˴ؤ��Ƥ⡤��
#  ����Ǥ�����ʤ���
# 
#  @(#) $Id: Makefile 946 2010-06-04 05:05:45Z ritsumei-takuya $
# 

#
#  �������åȤλ����Makefile.target�Ǿ�񤭤����Τ��ɤ������
#
all:

#
#  �������å�ά�Τ����
#
TARGET = mindstorms_nxt_gcc

#
#  �ץ�����ߥ󥰸�������
#
SRCLANG = c
ifeq ($(SRCLANG),c++)
  USE_CXX = true
  CXXLIBS = -lstdc++ -lm -lc
  CXXRTS = cxxrt.o newlibrt.o
endif

#
#  �������ե�����Υǥ��쥯�ȥ�����
#
SRCDIR = ../..

#
#  ���֥������ȥե�����̾�γ�ĥ�Ҥ�����
#
OBJEXT = elf

#
#  �¹ԴĶ�������ʥ������åȰ�¸�˾�񤭤�����礬�����
#
DBGENV :=  

#
#  �����ͥ�饤�֥���libkernel.a�ˤΥǥ��쥯�ȥ�̾
#  �ʥ����ͥ�饤�֥���make�оݤˤ�����ϡ�������������
#
KERNEL_LIB = 

#
#  �����ͥ��ؿ�ñ�̤ǥ���ѥ��뤹�뤫�ɤ��������
#
KERNEL_FUNCOBJS = 

#
#  �ȥ졼��������������뤫�ɤ��������
#
ENABLE_TRACE = 

#
#  �桼�ƥ���ƥ��ץ�������̾��
#
PERL = /usr/bin/perl
RUBY = /usr/bin/ruby
CFG = $(SRCDIR)/cfg/cfg/cfg

#
#  TECS���󥿥ե����������ͥ졼���ط������
#
TECSGEN = $(SRCDIR)/tecsgen  -k euc

#tecsgen.rb (ruby + racc)�����Ѥ�����ϲ�����RUBYLIB��TECSGEN����������Ѥ���
# RUBYLIB = $(SRCDIR)/tecsgen/tecsgen
# TECSGEN =$(RUBY) $(SRCDIR)/tecsgen/tecsgen/tecsgen.rb -L $(RUBYLIB) -k euc


#
#  ���֥������ȥե�����̾�����
#
OBJNAME = aspnxt
ifdef OBJEXT
  OBJFILE = $(OBJNAME).$(OBJEXT)
  CFG1_OUT = cfg1_out.$(OBJEXT)
else
  OBJFILE = $(OBJNAME)
  CFG1_OUT = cfg1_out
endif

#
#  �������åȰ�¸���Υǥ��쥯�ȥ�����
#
TARGETDIR = $(SRCDIR)/target/$(TARGET)

#
#  TECS��������������Υ��󥯥롼��
#
-include gen/Makefile.tecsgen

#
#  �������åȰ�¸������Υ��󥯥롼��
#
include $(TARGETDIR)/Makefile.target

#
#  Syslog�ط������
#
ifdef USE_SYSLOG
  SYSSVC_COBJS := $(SYSSVC_COBJS) vasyslog.o 
else 
  COPTS := $(COPTS) -D TOPPERS_OMIT_SYSLOG
endif


#
#  ����ե�����졼���ط����ѿ������
#
CFG_TABS := --api-table $(SRCDIR)/kernel/kernel_api.csv \
			--cfg1-def-table $(SRCDIR)/kernel/kernel_def.csv $(CFG_TABS)
CFG_OBJS := kernel_cfg.o $(CFG_OBJS)
CFG2_OUT := kernel_cfg.c kernel_cfg.h $(CFG2_OUT)
#
#  ���̥���ѥ��륪�ץ��������
#
COPTS := $(COPTS) -g
ifndef OMIT_WARNING_ALL
  COPTS := $(COPTS) -Wall
endif
ifndef OMIT_OPTIMIZATION
  COPTS := $(COPTS) -O2
endif
CDEFS := $(CDEFS)
INCLUDES := -I. -I./gen -I$(SRCDIR)/tecs_kernel -I$(SRCDIR)/include \
			-I$(SRCDIR)/arch -I$(SRCDIR) $(INCLUDES)
LDFLAGS := $(LDFLAGS)
LIBS := $(LIBS) $(CXXLIBS)
CFLAGS = $(COPTS) $(CDEFS) $(INCLUDES)

#
#  ���ץꥱ�������ץ������˴ؤ������
#
APPLNAME = tSample
APPLDIR =
APPL_CFG = $(APPLNAME).cfg
APPL_CDL = $(APPLNAME).cdl

APPL_DIR = $(APPLDIR) $(SRCDIR)/library
APPL_ASMOBJS =
ifdef USE_CXX
  APPL_CXXOBJS = 
  APPL_COBJS = $(TECS_COBJS) tecs_init.o
else
  APPL_COBJS =  $(TECS_COBJS) tecs_init.o
endif
APPL_CFLAGS =
APPL_LIBS =
ifdef APPLDIR
  INCLUDES := $(INCLUDES) $(foreach dir,$(APPLDIR),-I$(dir))
endif

#
#  �����ƥॵ���ӥ��˴ؤ������
#
SYSSVC_DIR := $(SYSSVC_DIR) $(SRCDIR)/syssvc $(SRCDIR)/library
SYSSVC_ASMOBJS := $(SYSSVC_ASMOBJS)
SYSSVC_COBJS := $(SYSSVC_COBJS) banner.o t_perror.o strerror.o \
				log_output.o $(CXXRTS)
SYSSVC_CFLAGS := $(SYSSVC_CFLAGS)
SYSSVC_LIBS := $(SYSSVC_LIBS)
INCLUDES := $(INCLUDES)

#
#  �����ͥ�˴ؤ������
#
#  KERNEL_ASMOBJS: �����ͥ�饤�֥��˴ޤ�롤��������������֥�����
#				   ���֥������ȥե����롥
#  KERNEL_COBJS: �����ͥ�Υ饤�֥��˴ޤ�롤��������C����ǡ�������
#				 �ե������1��1���б����륪�֥������ȥե����롥
#  KERNEL_LCSRCS: �����ͥ�Υ饤�֥��˴ޤ��C����Υ������ե�����ǡ�
#				  1�ĤΥ������ե����뤫��ʣ���Υ��֥������ȥե��������
#				  �������Ρ�
#  KERNEL_LCOBJS: ��Υ������ե����뤫����������륪�֥������ȥե����롥
#  KERNEL_AUX_COBJS: �����ɥ⥸�塼��˴ޤ�ʤ����������ͥ�Υ������ե�
#					 �����Ʊ�����ץ�����Ŭ�Ѥ��ƥ���ѥ��뤹�٤�������
#					 ����C����Υ��֥������ȥե����롥
#
KERNEL_DIR := $(KERNEL_DIR) $(SRCDIR)/kernel $(SRCDIR)/tecs_kernel
KERNEL_ASMOBJS := $(KERNEL_ASMOBJS)
KERNEL_COBJS := $(KERNEL_COBJS)
KERNEL_CFLAGS := $(KERNEL_CFLAGS) -I$(SRCDIR)/kernel
ifdef OMIT_MAKEOFFSET
  OFFSET_H =
  KERNEL_AUX_COBJS =
else
  OFFSET_H = offset.h
ifndef OFFSET_TF
  KERNEL_AUX_COBJS := $(KERNEL_AUX_COBJS) makeoffset.o
endif
endif

#
#  �������åȥե������ʣ����Ʊ�������򤷤ƤϤʤ�ʤ���
#
all: $(OBJFILE)
#all: $(OBJNAME).bin
#all: $(OBJNAME).srec

##### �ʲ����Խ����ʤ����� #####

#
#  �Ķ��˰�¸���륳��ѥ��륪�ץ��������
#
ifdef DBGENV
  CDEFS := $(CDEFS) -D$(DBGENV)
endif

#
#  �����ͥ�饤�֥��˴�Ϣ�������
#
ifdef KERNEL_LIB
  LIBKERNEL = $(KERNEL_LIB)/libkernel.a
else
  LIBKERNEL = libkernel.a
endif

#
#  �����ͥ�Υե����빽�������
#
include $(SRCDIR)/kernel/Makefile.kernel
ifdef KERNEL_FUNCOBJS
  KERNEL_LCSRCS := $(KERNEL_FCSRCS)
  KERNEL_LCOBJS := $(foreach file,$(KERNEL_FCSRCS),$($(file:.c=)))
else
  KERNEL_CFLAGS := -DALLFUNC $(KERNEL_CFLAGS)
  KERNEL_COBJS := $(KERNEL_COBJS) \
					$(foreach file,$(KERNEL_FCSRCS),$(file:.c=.o))
endif

#
#  �������ե�����Τ���ǥ��쥯�ȥ�˴ؤ������
#
vpath %.c ./gen $(KERNEL_DIR) $(SYSSVC_DIR) $(APPL_DIR)
vpath %.S ./gen $(KERNEL_DIR) $(SYSSVC_DIR) $(APPL_DIR)
vpath %.cfg $(APPL_DIR)

#
#  ����ѥ���Τ�����ѿ������
#
KERNEL_LIB_OBJS = $(KERNEL_ASMOBJS) $(KERNEL_COBJS) $(KERNEL_LCOBJS)
SYSSVC_OBJS = $(SYSSVC_ASMOBJS) $(SYSSVC_COBJS)
APPL_OBJS = $(APPL_ASMOBJS) $(APPL_COBJS) $(APPL_CXXOBJS)
ALL_OBJS = $(START_OBJS) $(APPL_OBJS) $(SYSSVC_OBJS) $(CFG_OBJS) \
											$(END_OBJS) $(HIDDEN_OBJS)
ALL_LIBS = $(APPL_LIBS) $(SYSSVC_LIBS) $(LIBKERNEL) $(LIBS)

ifdef TEXT_START_ADDRESS
  LDFLAGS := $(LDFLAGS) -Wl,-Ttext,$(TEXT_START_ADDRESS)
endif
ifdef DATA_START_ADDRESS
  LDFLAGS := $(LDFLAGS) -Wl,-Tdata,$(DATA_START_ADDRESS)
endif
ifdef LDSCRIPT
  LDFLAGS := $(LDFLAGS) -T $(LDSCRIPT)
endif

#
#  offset.h ��������§�ʹ�¤����Υ��ե��å��ͤλ��С�
#
ifdef OFFSET_TF
offset.h: kernel_cfg.timestamp
	$(CFG) --pass 3 --kernel asp $(INCLUDES) \
				--rom-image cfg1_out.srec --symbol-table cfg1_out.syms \
				-T $(OFFSET_TF) $(CFG_TABS) $(APPL_CFG)
else
offset.h: makeoffset.s $(SRCDIR)/utils/genoffset
	$(PERL) $(SRCDIR)/utils/genoffset makeoffset.s > offset.h
endif

#
#  �����ͥ�Υ���ե�����졼�����ե����������
#
cfg1_out.c: $(APPL_CFG)
	$(CFG) --pass 1 --kernel asp $(INCLUDES) $(CFG_TABS) $<

kernel_cfg.timestamp: $(START_OBJS) cfg1_out.o $(END_OBJS) $(HIDDEN_OBJS)
kernel_cfg.timestamp $(CFG2_OUT): $(APPL_CFG)
	$(LINK) $(CFLAGS) $(LDFLAGS) $(CFG1_OUT_LDFLAGS) -o $(CFG1_OUT) \
						$(START_OBJS) cfg1_out.o $(END_OBJS)
	$(NM) -C $(CFG1_OUT) > cfg1_out.syms
	$(OBJCOPY) -O srec -S $(CFG1_OUT) cfg1_out.srec
	$(CFG) --pass 2 --kernel asp $(INCLUDES) \
				-T $(TARGETDIR)/target.tf $(CFG_TABS) $<
	touch kernel_cfg.timestamp

#
#  �����ͥ�饤�֥��ե����������
#
libkernel.a: $(OFFSET_H) $(KERNEL_LIB_OBJS)
	rm -f libkernel.a
	$(AR) -rcs libkernel.a $(KERNEL_LIB_OBJS)
	$(RANLIB) libkernel.a

#
#  ���̤ʰ�¸�ط������
#
banner.o: tecs.timestamp kernel_cfg.timestamp \
				$(filter-out banner.o,$(ALL_OBJS)) $(filter %.a,$(ALL_LIBS))

#
#  ���ΤΥ��
#
$(OBJFILE): $(APPL_CFG) tecs.timestamp kernel_cfg.timestamp \
				$(ALL_OBJS) $(filter %.a,$(ALL_LIBS))
	$(LINK) $(CFLAGS) $(LDFLAGS) -o $(OBJFILE) $(START_OBJS) \
			$(APPL_OBJS) $(SYSSVC_OBJS) $(CFG_OBJS) $(ALL_LIBS) $(END_OBJS)
	$(NM) -C $(OBJFILE) > $(OBJNAME).syms
	$(OBJCOPY) -O srec -S $(OBJFILE) $(OBJNAME).srec
	$(OBJCOPY) -O binary -S $(OBJFILE) $(OBJNAME).rxe
	$(OBJCOPY) -O binary -S $(OBJFILE) $(OBJNAME).bin
	$(CFG) --pass 3 --kernel asp $(INCLUDES) \
				--rom-image $(OBJNAME).srec --symbol-table $(OBJNAME).syms \
				-T $(TARGETDIR)/target_check.tf $(CFG_TABS) $<

#
#  �Х��ʥ�ե����������
#
$(OBJNAME).bin: $(OBJFILE)
	$(OBJCOPY) -O binary -S $(OBJFILE) $(OBJNAME).bin

#
#  S�쥳���ɥե����������
#
$(OBJNAME).srec: $(OBJFILE)
	$(OBJCOPY) -O srec -S $(OBJFILE) $(OBJNAME).srec

#
#  ����ѥ����̤ξõ�
#
.PHONY: clean
clean:
	rm -f \#* *~ *.o $(CLEAN_FILES)
	rm -f $(OBJFILE) $(OBJNAME).syms $(OBJNAME).srec $(OBJNAME).bin $(OBJNAME).rxe
	rm -f kernel_cfg.timestamp $(CFG2_OUT)
	rm -f cfg1_out.c $(CFG1_OUT) cfg1_out.syms cfg1_out.srec
ifndef KERNEL_LIB
	rm -f $(LIBKERNEL)
endif
	rm -f makeoffset.s offset.h

.PHONY: cleankernel
cleankernel:
	rm -rf $(KERNEL_LIB_OBJS)
	rm -f makeoffset.s offset.h

.PHONY: cleandep
cleandep:
	if ! [ -f Makefile.depend ]; then \
		rm -f kernel_cfg.timestamp $(CFG2_OUT); \
		rm -f cfg1_out.c cfg1_out.o $(CFG1_OUT) cfg1_out.syms cfg1_out.srec; \
		rm -f makeoffset.s offset.h; \
	fi
	rm -f Makefile.depend

.PHONY: cleantecs
cleantecs:
	rm -rf gen
	rm -f tecs.timestamp

.PHONY: realclean
realclean: cleantecs cleandep clean
	rm -f $(REALCLEAN_FILES)

#
#  TECS���󥿥ե����������ͥ졼���μ¹�
#
tecs.timestamp: $(APPL_CDL) $(TECS_IMPORTS)
	 $(TECSGEN) -R -D TECS -D TECS_CPP \
										$(INCLUDES) $(APPL_CDL)
	touch tecs.timestamp

.PHONY: tecs
tecs: tecs.timestamp

#
#  kernel_cfg.c��cfg1_out.c�Υ���ѥ���롼��Ȱ�¸�ط������롼������
#
#  kernel_cfg.c��cfg1_out.c�ϡ����ץꥱ�������ץ�������ѡ������ƥॵ��
#  �ӥ��ѡ������ͥ��ѤΤ��٤ƤΥ��ץ������դ��ƥ���ѥ��뤹�롥
#
KERNEL_CFG_CFLAGS = $(APPL_CFLAGS) $(SYSSVC_CFLAGS) $(KERNEL_CFLAGS)

kernel_cfg.o cfg1_out.o: %.o: %.c
	$(CC) -c $(CFLAGS) $(KERNEL_CFG_CFLAGS) $<

kernel_cfg.s cfg1_out.s: %.s: %.c
	$(CC) -S $(CFLAGS) $(KERNEL_CFG_CFLAGS) $<

kernel_cfg.d cfg1_out.d: %.d: %.c
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) \
		-O "$(CFLAGS) $(KERNEL_CFG_CFLAGS)" $< >> Makefile.depend

#
#  �ü�ʰ�¸�ط������롼������
#
cfg1_out.depend: $(APPL_CFG)
	@$(CFG) -M cfg1_out.c $(INCLUDES) $< >> Makefile.depend

makeoffset.d: makeoffset.c
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) \
	     -T "makeoffset.s" -O "$(CFLAGS) $(KERNEL_CFLAGS)" $< >> Makefile.depend

#
#  ��¸�ط��ե����������
#
.PHONY: gendepend
gendepend:
	@echo "Generating Makefile.depend."

.PHONY: depend
ifdef KERNEL_LIB
depend: cleandep kernel_cfg.timestamp gendepend \
		cfg1_out.depend cfg1_out.d \
		$(ALL_OBJS:.o=.d)
else
depend: cleandep $(OFFSET_H) kernel_cfg.timestamp gendepend \
		cfg1_out.depend cfg1_out.d \
		$(KERNEL_AUX_COBJS:.o=.d) $(KERNEL_ASMOBJS:.o=.d) \
		$(KERNEL_COBJS:.o=.d) $(KERNEL_LCSRCS:.c=.d) $(ALL_OBJS:.o=.d)
endif

#
#  ��¸�ط��ե�����򥤥󥯥롼��
#
-include Makefile.depend

#
#  ��ȯ�ġ���Υ��ޥ��̾�����
#
ifeq ($(TOOL),gcc)
  #
  #  GNU��ȯ�Ķ���
  #
  ifdef GCC_TARGET
    GCC_TARGET_PREFIX = $(GCC_TARGET)-
  else
    GCC_TARGET_PREFIX =
  endif
  CC = $(GCC_TARGET_PREFIX)gcc
  CXX = $(GCC_TARGET_PREFIX)g++
  AS = $(GCC_TARGET_PREFIX)as
  LD = $(GCC_TARGET_PREFIX)ld
  AR = $(GCC_TARGET_PREFIX)ar
  NM = $(GCC_TARGET_PREFIX)nm
  RANLIB = $(GCC_TARGET_PREFIX)ranlib
  OBJCOPY = $(GCC_TARGET_PREFIX)objcopy
  OBJDUMP = $(GCC_TARGET_PREFIX)objdump
endif

ifdef USE_CXX
  LINK = $(CXX)
else
  LINK = $(CC)
endif

#
#  ����ѥ���롼������
#
KERNEL_ALL_COBJS = $(KERNEL_COBJS) $(KERNEL_AUX_COBJS)

$(KERNEL_ALL_COBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $(KERNEL_CFLAGS) $<

$(KERNEL_ALL_COBJS:.o=.s): %.s: %.c
	$(CC) -S $(CFLAGS) $(KERNEL_CFLAGS) $<

$(KERNEL_LCOBJS): %.o:
	$(CC) -DTOPPERS_$(*F) -o $@ -c $(CFLAGS) $(KERNEL_CFLAGS) $<

$(KERNEL_LCOBJS:.o=.s): %.s:
	$(CC) -DTOPPERS_$(*F) -o $@ -S $(CFLAGS) $(KERNEL_CFLAGS) $<

$(KERNEL_ASMOBJS): %.o: %.S
	$(CC) -c $(CFLAGS) $(KERNEL_CFLAGS) $<

$(SYSSVC_COBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $(SYSSVC_CFLAGS) $<

$(SYSSVC_COBJS:.o=.s): %.s: %.c
	$(CC) -S $(CFLAGS) $(SYSSVC_CFLAGS) $<

$(SYSSVC_ASMOBJS): %.o: %.S
	$(CC) -c $(CFLAGS) $(SYSSVC_CFLAGS) $<

$(APPL_COBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_COBJS:.o=.s): %.s: %.c
	$(CC) -S $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_CXXOBJS): %.o: %.cpp
	$(CXX) -c $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_CXXOBJS:.o=.s): %.s: %.cpp
	$(CXX) -S $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_ASMOBJS): %.o: %.S
	$(CC) -c $(CFLAGS) $(APPL_CFLAGS) $<

#
#  ��¸�ط������롼������
#
$(KERNEL_COBJS:.o=.d): %.d: %.c
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) \
		-O "$(CFLAGS) $(KERNEL_CFLAGS)" $< >> Makefile.depend

$(KERNEL_LCSRCS:.c=.d): %.d: %.c
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) -T "$($*)" \
		-O "-DALLFUNC $(CFLAGS) $(KERNEL_CFLAGS)" $< >> Makefile.depend

$(KERNEL_ASMOBJS:.o=.d): %.d: %.S
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) \
		-O "$(CFLAGS) $(KERNEL_CFLAGS)" $< >> Makefile.depend

$(SYSSVC_COBJS:.o=.d): %.d: %.c
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) \
		-O "$(CFLAGS) $(SYSSVC_CFLAGS)" $< >> Makefile.depend

$(SYSSVC_ASMOBJS:.o=.d): %.d: %.S
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) \
		-O "$(CFLAGS) $(SYSSVC_CFLAGS)" $< >> Makefile.depend

$(APPL_COBJS:.o=.d): %.d: %.c
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) \
		-O "$(CFLAGS) $(APPL_CFLAGS)" $< >> Makefile.depend

$(APPL_CXXOBJS:.o=.d): %.d: %.cpp
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CXX) $(MAKEDEP_OPTS)\
		-O "$(CFLAGS) $(APPL_CFLAGS)" $< >> Makefile.depend

$(APPL_ASMOBJS:.o=.d): %.d: %.S
	@$(PERL) $(SRCDIR)/utils/makedep -C $(CC) $(MAKEDEP_OPTS) \
		-O "$(CFLAGS) $(APPL_CFLAGS)" $< >> Makefile.depend

#
#  �ǥե���ȥ���ѥ���롼�����
#
%.o: %.c
	@echo "*** Default compile rules should not be used."
	$(CC) -c $(CFLAGS) $<

%.s: %.c
	@echo "*** Default compile rules should not be used."
	$(CC) -S $(CFLAGS) $<

%.o: %.cpp
	@echo "*** Default compile rules should not be used."
	$(CXX) -c $(CFLAGS) $<

%.s: %.cpp
	@echo "*** Default compile rules should not be used."
	$(CXX) -S $(CFLAGS) $<

%.o: %.S
	@echo "*** Default compile rules should not be used."
	$(CC) -c $(CFLAGS) $<